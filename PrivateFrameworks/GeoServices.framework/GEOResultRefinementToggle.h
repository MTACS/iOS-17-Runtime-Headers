
@interface GEOResultRefinementToggle : NSObject {
    NSString * _displayName;
    int  _evChargingConnectorType;
    bool  _isSelected;
    GEOPDResultRefinementMetadata * _metadata;
    NSString * _refinementKey;
    bool  _selectionFromView;
    NSNumber * _selectionSequenceNumber;
    bool  _showAsSelected;
    unsigned long long  _toggleType;
}

@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, readonly) int evChargingConnectorType;
@property (nonatomic) bool isSelected;
@property (nonatomic, retain) GEOPDResultRefinementMetadata *metadata;
@property (nonatomic, readonly) NSString *refinementKey;
@property (nonatomic, readonly) bool selectionFromView;
@property (nonatomic, readonly) NSNumber *selectionSequenceNumber;
@property (nonatomic, readonly) bool showAsSelected;
@property (nonatomic, readonly) unsigned long long toggleType;

- (void).cxx_destruct;
- (id)convertToGEOPDResultRefinementToggle;
- (id)displayName;
- (int)evChargingConnectorType;
- (id)initWithDisplayName:(id)arg1 isSelected:(bool)arg2 metadata:(id)arg3 toggleType:(unsigned long long)arg4 evChargingConnectorType:(int)arg5 selectionSequenceNumber:(id)arg6 selectionFromView:(bool)arg7 refinementKey:(id)arg8 showAsSelected:(bool)arg9;
- (id)initWithResultRefinementToggle:(id)arg1;
- (bool)isSelected;
- (id)metadata;
- (id)refinementKey;
- (bool)selectionFromView;
- (id)selectionSequenceNumber;
- (void)setDisplayName:(id)arg1;
- (void)setIsSelected:(bool)arg1;
- (void)setMetadata:(id)arg1;
- (bool)showAsSelected;
- (unsigned long long)toggleType;

@end
