
@interface CIFilterClassInfo : NSObject {
    NSArray * inputClasses;
    NSArray * inputKeys;
    NSArray * outputKeys;
}

+ (id)cache;
+ (id)classInfoForClass:(Class)arg1;
+ (void)clearCache;

- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithClass:(Class)arg1;
- (id)inputClasses;
- (id)inputKeys;
- (id)outputKeys;

@end
