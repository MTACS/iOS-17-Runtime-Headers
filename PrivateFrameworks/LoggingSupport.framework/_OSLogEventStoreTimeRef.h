
@interface _OSLogEventStoreTimeRef : NSObject {
    unsigned long long  _ct;
    unsigned char  _uuid;
}

@property (nonatomic, readonly) const char *UUID;
@property (nonatomic, readonly) unsigned long long continuousTime;

+ (id)timeRef;

- (const char *)UUID;
- (unsigned long long)continuousTime;
- (id)initWithDictionary:(id)arg1;
- (id)initWithUUID:(unsigned char)arg1 continuous:(unsigned long long)arg2;

@end
