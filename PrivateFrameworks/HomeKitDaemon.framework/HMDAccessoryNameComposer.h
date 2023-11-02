
@interface HMDAccessoryNameComposer : NSObject {
    NSString * _accessoryName;
    NSString * _rawAccessoryName;
    NSString * _rawRoomName;
    NSString * _roomName;
    bool  _roomNameAtEndSeparatedByWhitespace;
}

@property (nonatomic, retain) NSString *accessoryName;
@property (nonatomic, readonly) NSString *composedString;
@property (nonatomic, retain) NSString *rawAccessoryName;
@property (nonatomic, retain) NSString *rawRoomName;
@property (nonatomic, retain) NSString *roomName;
@property (nonatomic) bool roomNameAtEndSeparatedByWhitespace;

- (void).cxx_destruct;
- (id)accessoryName;
- (id)composedString;
- (unsigned long long)hash;
- (id)initWithRawAccessoryName:(id)arg1 rawRoomName:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)rawAccessoryName;
- (id)rawRoomName;
- (id)roomName;
- (bool)roomNameAtEndSeparatedByWhitespace;
- (void)setAccessoryName:(id)arg1;
- (void)setRawAccessoryName:(id)arg1;
- (void)setRawRoomName:(id)arg1;
- (void)setRoomName:(id)arg1;
- (void)setRoomNameAtEndSeparatedByWhitespace:(bool)arg1;

@end
