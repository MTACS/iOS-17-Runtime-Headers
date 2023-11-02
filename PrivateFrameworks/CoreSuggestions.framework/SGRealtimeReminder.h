
@interface SGRealtimeReminder : NSObject <NSCopying, NSSecureCoding, SGRealtimeSuggestion> {
    NSString * _notes;
    SGReminder * _reminder;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *notes;
@property (nonatomic, readonly) SGReminder *reminder;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithReminder:(id)arg1 notes:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToRealtimeReminder:(id)arg1;
- (id)notes;
- (id)reminder;

@end
