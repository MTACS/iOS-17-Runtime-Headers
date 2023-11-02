
@interface MRPlaybackSessionRequest : NSObject {
    bool  _hasLength;
    bool  _hasLocation;
    NSString * _identifier;
    unsigned long long  _length;
    unsigned long long  _location;
    NSString * _requestIdentifier;
    NSString * _type;
}

@property (nonatomic, readonly, copy) NSData *data;
@property (nonatomic) bool hasLength;
@property (nonatomic) bool hasLocation;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) unsigned long long length;
@property (nonatomic) unsigned long long location;
@property (nonatomic, readonly) _MRPlaybackSessionRequestProtobuf *protobuf;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property (nonatomic, copy) NSString *requestIdentifier;
@property (nonatomic, copy) NSString *type;

- (void).cxx_destruct;
- (id)data;
- (id)description;
- (bool)hasLength;
- (bool)hasLocation;
- (id)identifier;
- (id)initWithData:(id)arg1;
- (id)initWithIdentifier:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)initWithIdentifier:(id)arg1 type:(id)arg2;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)length;
- (unsigned long long)location;
- (id)protobuf;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (id)requestIdentifier;
- (void)setHasLength:(bool)arg1;
- (void)setHasLocation:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLength:(unsigned long long)arg1;
- (void)setLocation:(unsigned long long)arg1;
- (void)setRequestIdentifier:(id)arg1;
- (void)setType:(id)arg1;
- (id)type;

@end
