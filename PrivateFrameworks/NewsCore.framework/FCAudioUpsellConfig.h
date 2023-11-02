
@interface FCAudioUpsellConfig : NSObject {
    NSURL * _URL;
    double  _duration;
    NSString * _identifier;
    unsigned long long  _playPosition;
}

@property (nonatomic, readonly, copy) NSURL *URL;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) unsigned long long playPosition;

- (void).cxx_destruct;
- (id)URL;
- (double)duration;
- (id)identifier;
- (id)init;
- (id)initWithConfigDictionary:(id)arg1;
- (unsigned long long)playPosition;

@end
