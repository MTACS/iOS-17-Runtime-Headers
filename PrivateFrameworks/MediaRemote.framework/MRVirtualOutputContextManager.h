
@interface MRVirtualOutputContextManager : NSObject {
    NSMutableDictionary * _ouputContextMap;
    NSArray * _outputContext;
}

@property (nonatomic, readonly) NSArray *outputContext;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)addOutputContext:(id)arg1;
- (id)fetchForUID:(id)arg1;
- (id)outputContext;
- (void)removeOutputContext:(id)arg1;

@end
