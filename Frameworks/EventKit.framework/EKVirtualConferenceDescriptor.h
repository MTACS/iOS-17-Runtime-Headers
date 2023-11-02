
@interface EKVirtualConferenceDescriptor : NSObject {
    NSArray * _URLDescriptors;
    NSString * _conferenceDetails;
    NSString * _title;
}

@property (nonatomic, readonly, copy) NSArray *URLDescriptors;
@property (nonatomic, readonly, copy) NSString *conferenceDetails;
@property (nonatomic, readonly, copy) NSString *title;

- (void).cxx_destruct;
- (id)URLDescriptors;
- (id)conferenceDetails;
- (id)initWithTitle:(id)arg1 URLDescriptors:(id)arg2 conferenceDetails:(id)arg3;
- (id)title;

@end
