
@interface MKMessageGroup : NSObject {
    NSString * _ID;
    NSString * _roomName;
}

@property (nonatomic, copy) NSString *ID;
@property (nonatomic, copy) NSString *roomName;

- (void).cxx_destruct;
- (id)ID;
- (id)init;
- (id)roomName;
- (void)setID:(id)arg1;
- (void)setRoomName:(id)arg1;

@end
