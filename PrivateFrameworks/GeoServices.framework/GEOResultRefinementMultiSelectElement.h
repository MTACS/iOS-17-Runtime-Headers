
@interface GEOResultRefinementMultiSelectElement : NSObject {
    NSString * _displayName;
    unsigned long long  _elementType;
    int  _evChargingConnectorType;
    bool  _isSelected;
    GEOPDResultRefinementMetadata * _metadata;
    NSNumber * _selectionSequenceNumber;
}

@property (nonatomic, retain) NSString *displayName;
@property (nonatomic, readonly) unsigned long long elementType;
@property (nonatomic, readonly) int evChargingConnectorType;
@property (nonatomic) bool isSelected;
@property (nonatomic, retain) GEOPDResultRefinementMetadata *metadata;
@property (nonatomic, readonly) NSString *refinementKey;
@property (nonatomic, readonly) NSNumber *selectionSequenceNumber;

- (void).cxx_destruct;
- (id)convertToGEOPDResultRefinementMultiSelectElement;
- (id)displayName;
- (unsigned long long)elementType;
- (int)evChargingConnectorType;
- (id)initWithDisplayName:(id)arg1 isSelected:(bool)arg2 metadata:(id)arg3 elementType:(unsigned long long)arg4 evChargingConnectorType:(int)arg5 selectionSequenceNumber:(id)arg6;
- (id)initWithResultRefinementMultiSelectElement:(id)arg1;
- (bool)isSelected;
- (id)metadata;
- (id)refinementKey;
- (id)selectionSequenceNumber;
- (void)setDisplayName:(id)arg1;
- (void)setIsSelected:(bool)arg1;
- (void)setMetadata:(id)arg1;

@end
