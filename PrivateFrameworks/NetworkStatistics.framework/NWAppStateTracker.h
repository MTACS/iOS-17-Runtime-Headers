
@interface NWAppStateTracker : NSObject {
    NSString * _identifier;
    int  _pid;
    NSUUID * _uuid;
}

@property (retain) NSString *identifier;
@property int pid;
@property (retain) NSUUID *uuid;

- (void).cxx_destruct;
- (id)description;
- (id)identifier;
- (int)pid;
- (void)setIdentifier:(id)arg1;
- (void)setPid:(int)arg1;
- (void)setUuid:(id)arg1;
- (id)uuid;

@end
