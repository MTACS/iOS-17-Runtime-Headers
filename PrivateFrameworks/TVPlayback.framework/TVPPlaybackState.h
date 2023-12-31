
@interface TVPPlaybackState : NSObject {
    NSString * _name;
}

@property (nonatomic, retain) NSString *name;

+ (id)loading;
+ (id)paused;
+ (id)playing;
+ (id)scanning;
+ (id)stopped;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithName:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;

@end
