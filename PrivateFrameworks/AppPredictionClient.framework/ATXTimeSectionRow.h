
@interface ATXTimeSectionRow : NSObject <NSSecureCoding> {
    NSArray * _accessories;
    NSDateComponents * _dateComponents;
    NSArray * _events;
    NSString * _identifier;
    bool  _isCurrent;
    long long  _prominence;
}

@property (nonatomic, readonly, copy) NSArray *accessories;
@property (nonatomic, readonly, copy) NSDateComponents *dateComponents;
@property (nonatomic, readonly, copy) NSArray *events;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) bool isCurrent;
@property (nonatomic, readonly) long long prominence;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessories;
- (id)dateComponents;
- (void)encodeWithCoder:(id)arg1;
- (id)events;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithEvents:(id)arg1 accessories:(id)arg2 dateComponents:(id)arg3 isCurrent:(bool)arg4 prominence:(long long)arg5 identifier:(id)arg6;
- (bool)isCurrent;
- (long long)prominence;

@end
