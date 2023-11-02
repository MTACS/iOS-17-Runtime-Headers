
@interface EKVirtualConferenceJoinMethod : NSObject <NSCopying> {
    NSURL * _URL;
    bool  _isBroadcast;
    NSString * _title;
}

@property (nonatomic, retain) NSURL *URL;
@property (nonatomic) bool isBroadcast;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (id)URL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithTitle:(id)arg1 url:(id)arg2;
- (bool)isBroadcast;
- (bool)isEqual:(id)arg1;
- (void)setIsBroadcast:(bool)arg1;
- (void)setURL:(id)arg1;
- (id)title;

@end
