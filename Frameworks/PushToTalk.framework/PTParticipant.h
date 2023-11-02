
@interface PTParticipant : NSObject {
    UIImage * _image;
    CXParticipant * _underlyingParticipant;
}

@property (nonatomic, readonly, copy) UIImage *image;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) CXParticipant *underlyingParticipant;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)image;
- (id)imageFileURL;
- (id)initWithName:(id)arg1 image:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)underlyingParticipant;

@end
