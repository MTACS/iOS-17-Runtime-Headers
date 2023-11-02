
@interface _PSContactFillerNormalizationConstants : NSObject {
    NSNumber * _incomingCallTotal;
    NSNumber * _incomingTextTotal;
    NSNumber * _outgoingCallTotal;
    NSNumber * _outgoingTextTotal;
    NSNumber * _shareTotal;
}

@property (copy) NSNumber *incomingCallTotal;
@property (copy) NSNumber *incomingTextTotal;
@property (copy) NSNumber *outgoingCallTotal;
@property (copy) NSNumber *outgoingTextTotal;
@property (copy) NSNumber *shareTotal;

- (void).cxx_destruct;
- (id)incomingCallTotal;
- (id)incomingTextTotal;
- (id)init;
- (id)outgoingCallTotal;
- (id)outgoingTextTotal;
- (void)setIncomingCallTotal:(id)arg1;
- (void)setIncomingTextTotal:(id)arg1;
- (void)setOutgoingCallTotal:(id)arg1;
- (void)setOutgoingTextTotal:(id)arg1;
- (void)setShareTotal:(id)arg1;
- (id)shareTotal;

@end
