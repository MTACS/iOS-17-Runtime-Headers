
@interface FlexLocalDBSongData : NSObject {
    NSMutableDictionary * _songData;
    NSString * _uid;
}

@property (nonatomic, readonly) NSDictionary *songData;
@property (nonatomic, readonly) NSString *uid;

- (void).cxx_destruct;
- (id)_allRequiredKeys;
- (bool)_validateSongData;
- (id)initForRecordCreationWithUID:(id)arg1 songData:(id)arg2;
- (id)initForRecordUpdateWithUID:(id)arg1 songData:(id)arg2;
- (id)initWithUID:(id)arg1 songData:(id)arg2 shouldValidate:(bool)arg3;
- (id)songData;
- (id)uid;

@end
