
@interface ADHistory : NSObject {
    NSString * _path;
}

@property (nonatomic, readonly) NSString *path;

- (bool)distributionsForKeyPrefix:(id)arg1 minDaysSince1970:(int)arg2 maxDaysSince1970:(int)arg3 rowHandler:(id /* block */)arg4;
- (id)initWithDefaultPath;
- (id)initWithPath:(id)arg1;
- (id)path;
- (bool)scalarsForKeyPrefix:(id)arg1 minDaysSince1970:(int)arg2 maxDaysSince1970:(int)arg3 rowHandler:(id /* block */)arg4;

@end
