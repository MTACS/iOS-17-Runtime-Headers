
@interface MEMessageAction : NSObject <NSSecureCoding> {
    MEMessageActionDestination * _destination;
    MEMessageActionFlagChange * _flagChange;
    long long  _messageColor;
    long long  _readStatus;
}

@property (nonatomic, readonly) MEMessageActionDestination *destination;
@property (nonatomic, readonly) MEMessageActionFlagChange *flagChange;
@property (nonatomic, readonly) long long messageColor;
@property (nonatomic, readonly) long long readStatus;

+ (id)flagActionWithFlag:(long long)arg1;
+ (id)markAsReadAction;
+ (id)markAsUnreadAction;
+ (id)moveToArchiveAction;
+ (id)moveToJunkAction;
+ (id)moveToTrashAction;
+ (id)setBackgroundColorActionWithColor:(long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)destination;
- (void)encodeWithCoder:(id)arg1;
- (id)flagChange;
- (id)initWithCoder:(id)arg1;
- (id)initWithDestination:(id)arg1 readStatus:(long long)arg2 flagChange:(id)arg3 messageColor:(long long)arg4;
- (bool)isEqual:(id)arg1;
- (long long)messageColor;
- (long long)readStatus;

@end
