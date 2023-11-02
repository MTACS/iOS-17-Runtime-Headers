
@interface VCConnectionSelector : NSObject {
    bool  _canUseP2PLinks;
    <VCConnectionProtocol> * _connectionForDuplication;
    <VCConnectionProtocol> * _connectionForDuplicationNonProbingVersion;
    struct { 
        bool preferRelayOverP2P; 
        bool preferIPv6OverIPv4; 
        bool preferNonVPN; 
        bool e2eCriteriaEnabled; 
        bool preferE2E; 
    }  _connectionSelectionPolicy;
    struct { 
        <VCConnectionProtocol> *primaryConnection; 
        <VCConnectionProtocol> *secondaryConnection; 
    }  _endToEndLinks;
    bool  _isMultiwaySession;
    <VCConnectionProtocol> * _lastPrimaryConnectionInUse;
    NSArray * _linkPreferenceOrder;
    <VCConnectionProtocol> * _primaryConnection;
    <VCConnectionProtocol> * _secondaryConnection;
    struct { 
        <VCConnectionProtocol> *primaryConnection; 
        <VCConnectionProtocol> *secondaryConnection; 
    }  _serverLinks;
}

@property bool canUseP2PLinks;
@property (nonatomic, retain) <VCConnectionProtocol> *connectionForDuplication;
@property (nonatomic, retain) <VCConnectionProtocol> *connectionForDuplicationNonProbingVersion;
@property (nonatomic, retain) <VCConnectionProtocol> *lastPrimaryConnectionInUse;
@property (nonatomic, copy) NSArray *linkPreferenceOrder;
@property (nonatomic, retain) <VCConnectionProtocol> *secondaryConnection;
@property (readonly) struct { id x1; id x2; } serverLinks;

- (bool)canUseP2PLinks;
- (id)connectionForDuplication;
- (id)connectionForDuplicationNonProbingVersion;
- (id)connectionForGroupType:(unsigned char)arg1 isPrimary:(bool)arg2;
- (void)dealloc;
- (struct { bool x1; bool x2; bool x3; bool x4; bool x5; }*)getConnectionSelectionPolicy;
- (id)initWithMultiwayEnabled:(bool)arg1;
- (bool)isPrimaryConnectionSameAsConnection:(id)arg1;
- (id)lastPrimaryConnectionInUse;
- (id)linkPreferenceOrder;
- (id)secondaryConnection;
- (void)selectConnectionForGroupType:(unsigned char)arg1 fromConnectionArray:(id)arg2 asPrimary:(bool)arg3;
- (bool)selectPrimaryAndSecondaryWithConnection:(id)arg1 isEndToEnd:(bool)arg2;
- (struct { id x1; id x2; })serverLinks;
- (void)setCanUseP2PLinks:(bool)arg1;
- (void)setConnectionForDuplication:(id)arg1;
- (void)setConnectionForDuplicationNonProbingVersion:(id)arg1;
- (void)setLastPrimaryConnectionInUse:(id)arg1;
- (void)setLinkPreferenceOrder:(id)arg1;
- (void)setSecondaryConnection:(id)arg1;
- (void)updateConnectionSelectionPolicyWithPreferRelayOverP2P:(bool)arg1 preferNonVPN:(bool)arg2 preferE2E:(bool)arg3;
- (void)updatePrimaryWithConnection:(id)arg1;
- (void)updateSecondaryWithConnection:(id)arg1;
- (void)updateSelectedConnectionsForGroupType:(unsigned char)arg1 connectionAdded:(id)arg2;
- (void)updateSelectedConnectionsForGroupType:(unsigned char)arg1 connectionRemoved:(id)arg2 connectionArray:(id)arg3;
- (void)useConnectionAsPrimary:(id)arg1;

@end
