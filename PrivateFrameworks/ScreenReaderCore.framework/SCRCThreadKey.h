
@interface SCRCThreadKey : NSObject <NSCopying> {
    NSString * _threadDescription;
    unsigned long long  _threadID;
}

@property (nonatomic, readonly) NSString *threadDescription;
@property (nonatomic, readonly) unsigned long long threadID;

+ (void)initialize;

- (void).cxx_destruct;
- (id)_allCurrentThreadIDs;
- (id)_initWithThreadID:(unsigned long long)arg1 description:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithDescription:(id)arg1;
- (id)initWithObject:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)threadDescription;
- (unsigned long long)threadID;

@end
