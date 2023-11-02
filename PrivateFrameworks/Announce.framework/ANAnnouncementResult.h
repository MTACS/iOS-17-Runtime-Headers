
@interface ANAnnouncementResult : NSObject <NSSecureCoding> {
    NSString * _deliveredAnnouncementID;
    ANAnnouncementDestination * _destination;
}

@property (nonatomic, readonly) NSString *deliveredAnnouncementID;
@property (nonatomic, readonly) ANAnnouncementDestination *destination;

+ (id)resultWithAnnouncementID:(id)arg1 destination:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)deliveredAnnouncementID;
- (id)description;
- (id)destination;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAnnouncementID:(id)arg1 destination:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end
