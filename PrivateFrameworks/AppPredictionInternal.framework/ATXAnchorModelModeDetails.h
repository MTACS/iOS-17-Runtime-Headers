
@interface ATXAnchorModelModeDetails : NSObject {
    bool  _isStart;
    NSString * _modeUUID;
}

@property (nonatomic, readonly) bool isStart;
@property (nonatomic, readonly) NSString *modeUUID;

- (void).cxx_destruct;
- (id)init;
- (id)initWithModeUUID:(id)arg1 isStart:(bool)arg2;
- (bool)isStart;
- (id)modeUUID;

@end
