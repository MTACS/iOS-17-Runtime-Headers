
@interface CKGroupUpdate : NSObject {
    long long  _groupUpdateType;
    NSString * _handleID;
}

@property (nonatomic) long long groupUpdateType;
@property (nonatomic, retain) NSString *handleID;

- (void).cxx_destruct;
- (id)description;
- (long long)groupUpdateType;
- (id)handleID;
- (id)initWithType:(long long)arg1 handleID:(id)arg2;
- (void)setGroupUpdateType:(long long)arg1;
- (void)setHandleID:(id)arg1;

@end
