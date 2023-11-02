
@interface EKVirtualConferenceURLDescriptor : NSObject {
    NSURL * _URL;
    NSString * _title;
}

@property (nonatomic, readonly, copy) NSURL *URL;
@property (nonatomic, readonly, copy) NSString *title;

- (void).cxx_destruct;
- (id)URL;
- (id)initWithTitle:(id)arg1 URL:(id)arg2;
- (id)title;

@end
