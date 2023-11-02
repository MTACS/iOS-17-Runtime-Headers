
@interface CXFeatures : NSObject

@property (nonatomic, readonly) bool callManagementMuteControl;
@property (getter=isChannelEnabled, nonatomic, readonly) bool channelEnabled;

- (bool)callManagementMuteControl;
- (bool)isChannelEnabled;

@end
