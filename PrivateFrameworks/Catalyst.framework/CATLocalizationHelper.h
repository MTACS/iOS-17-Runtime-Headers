
@interface CATLocalizationHelper : NSObject {
    NSBundle * _bundle;
    NSLock * mLock;
    NSMutableDictionary * mStringByKeyByTableName;
}

@property (nonatomic, readonly) NSBundle *bundle;

+ (id)helperForBundle:(id)arg1;

- (void).cxx_destruct;
- (id)bundle;
- (id)initWithBundle:(id)arg1;
- (id)stringByKeyForTableName:(id)arg1;
- (id)stringsForKey:(id)arg1 value:(id)arg2 table:(id)arg3;

@end
