
@interface HMDUserCloudShareRequest : NSObject {
    NSString * _containerID;
    HMDHome * _home;
    NSUUID * _identifier;
    NSDate * _startDate;
}

@property (readonly) NSString *containerID;
@property (readonly) HMDHome *home;
@property (readonly) NSUUID *identifier;
@property (readonly) NSDate *startDate;

- (void).cxx_destruct;
- (id)containerID;
- (id)home;
- (id)identifier;
- (id)initWithStartDate:(id)arg1 containerID:(id)arg2 home:(id)arg3;
- (id)startDate;

@end
