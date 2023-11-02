
@interface SWDeveloperSettings : NSObject {
    bool  _allowRemoteInspection;
}

@property (nonatomic, readonly) bool allowRemoteInspection;

- (bool)allowRemoteInspection;
- (id)initWithAllowRemoteInspection:(bool)arg1;

@end
