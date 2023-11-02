
@interface GDContact : NSObject {
    long long  _contactType;
    NSString * _displayName;
    NSString * _handle;
    long long  _participantStatus;
}

@property (nonatomic, readonly) long long contactType;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSString *handle;
@property (nonatomic, readonly) long long participantStatus;

- (void).cxx_destruct;
- (long long)contactType;
- (id)displayName;
- (id)handle;
- (id)initWithHandle:(id)arg1;
- (id)initWithHandle:(id)arg1 contactType:(long long)arg2 displayName:(id)arg3 participantStatus:(long long)arg4;
- (long long)participantStatus;

@end
