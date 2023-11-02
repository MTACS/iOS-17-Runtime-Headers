
@interface PPMeCardCache : NSObject {
    NSString * _path;
}

- (void).cxx_destruct;
- (bool)deleteMeCardCache;
- (id)init;
- (id)loadMeCardCache;
- (bool)writeMeCardCache:(id)arg1;

@end
