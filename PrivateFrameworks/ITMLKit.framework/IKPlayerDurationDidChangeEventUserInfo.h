
@interface IKPlayerDurationDidChangeEventUserInfo : NSObject <IKPlayerEventMarshaling> {
    double  _newDuration;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double newDuration;
@property (nonatomic, readonly) NSDictionary *properties;
@property (readonly) Class superclass;

- (id)initWithNewDuration:(double)arg1;
- (double)newDuration;
- (id)properties;

@end
