
@interface CalVirtualConference : NSObject {
    NSString * _conferenceDetails;
    bool  _isWritable;
    NSArray * _joinMethods;
    unsigned long long  _source;
    NSString * _title;
}

@property (nonatomic, readonly) NSString *conferenceDetails;
@property (nonatomic, readonly) bool isWritable;
@property (nonatomic, readonly) NSArray *joinMethods;
@property (nonatomic, readonly) unsigned long long source;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (id)conferenceDetails;
- (id)description;
- (id)initWithTitle:(id)arg1 joinMethods:(id)arg2 conferenceDetails:(id)arg3 source:(unsigned long long)arg4 isWritable:(bool)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isWritable;
- (id)joinMethods;
- (unsigned long long)source;
- (id)title;

@end
