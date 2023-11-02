
@interface EKVirtualConference : NSObject <NSCopying> {
    NSString * _conferenceDetails;
    NSArray * _joinMethods;
    NSString * _serializationBlockTitle;
    unsigned long long  _source;
    NSString * _title;
}

@property (nonatomic, readonly) NSString *conferenceDetails;
@property (nonatomic, readonly) NSURL *firstPhoneNumber;
@property (nonatomic, readonly) bool isWritable;
@property (nonatomic, copy) NSArray *joinMethods;
@property (nonatomic, copy) NSString *serializationBlockTitle;
@property (nonatomic) unsigned long long source;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSURL *urlWithAllowedScheme;

+ (void)virtualConferenceForRoomType:(id)arg1 completion:(id /* block */)arg2 queue:(id)arg3;

- (void).cxx_destruct;
- (id)conferenceDetails;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)firstPhoneNumber;
- (id)initWithTitle:(id)arg1 joinMethods:(id)arg2 conferenceDetails:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isWritable;
- (id)joinMethods;
- (id)serializationBlockTitle;
- (void)setJoinMethods:(id)arg1;
- (void)setSerializationBlockTitle:(id)arg1;
- (void)setSource:(unsigned long long)arg1;
- (unsigned long long)source;
- (id)title;
- (id)urlWithAllowedScheme;

@end
