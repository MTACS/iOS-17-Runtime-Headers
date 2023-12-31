
@interface WFLSMMap : NSObject {
    struct __LSMMap { } * map;
    NSNumber * threshold;
}

@property (copy) NSNumber *threshold;

+ (id)mapFromFilePath:(id)arg1;
+ (id)mapFromURL:(id)arg1;
+ (id)mapWithMap:(struct __LSMMap { }*)arg1;

- (struct __LSMText { }*)_createLSMTextFromString:(id)arg1;
- (struct __LSMMap { }*)_map;
- (void)_setMap:(struct __LSMMap { }*)arg1;
- (void)dealloc;
- (id)evaluate:(id)arg1;
- (id)initWithMap:(struct __LSMMap { }*)arg1;
- (id)initWithMapFromFilePath:(id)arg1;
- (id)initWithMapFromURL:(id)arg1;
- (long long)numberOfCategories;
- (void)setThreshold:(id)arg1;
- (id)threshold;
- (id)wordDump:(id)arg1;

@end
