
@interface SiriCoreSyncRecord : NSObject {
    NSData * _addedValue;
    NSData * _checkHash;
    NSData * _dataValue;
    NSString * _debugValue;
    NSString * _identifier;
    int  _itemPriority;
    NSString * _key;
    NSData * _metaValue;
    double  _updateTime;
}

@property (nonatomic, retain) NSData *addedValue;
@property (nonatomic, retain) NSData *checkHash;
@property (nonatomic, retain) NSData *dataValue;
@property (nonatomic, retain) NSString *debugValue;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) int itemPriority;
@property (nonatomic, retain) NSString *key;
@property (nonatomic, retain) NSData *metaValue;
@property (nonatomic) double updateTime;

+ (id)syncRecordWithKey:(id)arg1 identifier:(id)arg2;
+ (id)syncRecordWithKey:(id)arg1 identifier:(id)arg2 priority:(int)arg3 debugValue:(id)arg4 dataValue:(id)arg5 addedValue:(id)arg6 appMeta:(id)arg7;

- (void).cxx_destruct;
- (id)addedValue;
- (id)checkHash;
- (id)dataValue;
- (id)debugValue;
- (id)description;
- (id)identifier;
- (id)initWithKey:(id)arg1 identifier:(id)arg2 priority:(int)arg3 debugValue:(id)arg4 dataValue:(id)arg5 addedValue:(id)arg6 appMeta:(id)arg7;
- (int)itemPriority;
- (id)key;
- (id)metaValue;
- (void)setAddedValue:(id)arg1;
- (void)setCheckHash:(id)arg1;
- (void)setDataValue:(id)arg1;
- (void)setDebugValue:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setItemPriority:(int)arg1;
- (void)setKey:(id)arg1;
- (void)setMetaValue:(id)arg1;
- (void)setUpdateTime:(double)arg1;
- (void)setUpdateTimeToNow;
- (void)updateHash;
- (double)updateTime;

@end
