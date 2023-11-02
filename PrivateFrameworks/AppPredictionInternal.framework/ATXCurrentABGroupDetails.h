
@interface ATXCurrentABGroupDetails : NSObject {
    NSMutableDictionary * _subTypeToABGroup;
    NSMutableDictionary * _subTypeToFinalSubscore;
}

@property (nonatomic, readonly) NSMutableDictionary *subTypeToABGroup;
@property (nonatomic, readonly) NSMutableDictionary *subTypeToFinalSubscore;

- (void).cxx_destruct;
- (id)abGroupIdentifierForConsumerSubType:(unsigned char)arg1;
- (id)abGroupIdentifierForFilename:(id)arg1;
- (id)finalSubScoreForConsumerSubType:(unsigned char)arg1;
- (id)init;
- (id)initWithAssetMapping:(id)arg1;
- (void)loadAssetFromAssetMapping:(id)arg1;
- (void)setABGroupFromFilename:(id)arg1 subType:(unsigned char)arg2 filenameToABGroup:(id)arg3;
- (void)setFinalSubscore:(id)arg1 subType:(unsigned char)arg2;
- (id)subTypeToABGroup;
- (id)subTypeToFinalSubscore;

@end
