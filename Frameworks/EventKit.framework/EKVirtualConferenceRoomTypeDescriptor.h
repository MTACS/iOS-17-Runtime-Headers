
@interface EKVirtualConferenceRoomTypeDescriptor : NSObject {
    NSString * _identifier;
    NSString * _title;
}

@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *title;

- (void).cxx_destruct;
- (id)identifier;
- (id)initWithTitle:(id)arg1 identifier:(id)arg2;
- (id)title;

@end
