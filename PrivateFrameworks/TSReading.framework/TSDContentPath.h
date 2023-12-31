
@interface TSDContentPath : NSObject {
    NSArray * _contentLocations;
}

@property (nonatomic, copy) NSArray *contentLocations;

+ (id)contentPathWithLocations:(id)arg1;

- (id)contentLocationAtTime:(double)arg1 withTimingFunction:(id)arg2;
- (id)contentLocations;
- (void)dealloc;
- (id)i_contentLocations;
- (void)setContentLocations:(id)arg1;

@end
