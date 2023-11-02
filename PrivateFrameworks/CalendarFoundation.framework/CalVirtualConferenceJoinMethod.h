
@interface CalVirtualConferenceJoinMethod : NSObject {
    NSURL * _URL;
    bool  _isBroadcast;
    NSString * _title;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) bool isBroadcast;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (id)URL;
- (id)description;
- (id)initWithTitle:(id)arg1 URL:(id)arg2 isBroadcast:(bool)arg3;
- (bool)isBroadcast;
- (bool)isEqual:(id)arg1;
- (id)title;

@end
