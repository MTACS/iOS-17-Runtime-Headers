
@interface EspressoMetalSingleton : NSObject {
    int  _is_memory_tight;
}

@property int is_memory_tight;

+ (id)shared;

- (int)is_memory_tight;
- (void)setIs_memory_tight:(int)arg1;

@end
