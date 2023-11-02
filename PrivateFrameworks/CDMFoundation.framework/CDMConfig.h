
@interface CDMConfig : NSObject <NSCopying> {
    NSOrderedSet * _availableServiceGraphs;
    unsigned int  _maxConcurrentCount;
}

@property (nonatomic, readonly) NSOrderedSet *availableServiceGraphs;
@property (nonatomic, readonly) NSString *defaultLocaleIdentifier;
@property (nonatomic, readonly) unsigned int maxConcurrentCount;

+ (id)defaultEnabledServiceGraph;

- (void).cxx_destruct;
- (id)availableServiceGraphs;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultLocaleIdentifier;
- (id)init;
- (id)initWithMaxConcurrentCount:(unsigned int)arg1;
- (unsigned int)maxConcurrentCount;

@end
