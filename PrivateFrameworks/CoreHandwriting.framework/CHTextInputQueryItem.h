
@interface CHTextInputQueryItem : NSObject {
    CHTextCorrectionResult * _correctionResult;
    NSNumber * _itemIdentifier;
    NSNumber * _itemStableIdentifier;
    NSArray * _strokeIdentifiers;
}

@property (nonatomic, readonly) CHTextCorrectionResult *correctionResult;
@property (nonatomic, readonly) NSNumber *itemIdentifier;
@property (nonatomic, readonly) NSNumber *itemStableIdentifier;
@property (nonatomic, readonly, copy) NSArray *strokeIdentifiers;

- (void).cxx_destruct;
- (id)correctionResult;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToTextInputQueryItem:(id)arg1;
- (id)itemIdentifier;
- (id)itemStableIdentifier;
- (id)strokeIdentifiers;

@end
