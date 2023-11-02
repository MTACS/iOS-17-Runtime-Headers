
@interface IAMImage : NSObject <NSCopying> {
    unsigned int  _height;
    NSString * _identifier;
    NSURL * _url;
    unsigned int  _width;
}

@property (nonatomic, readonly) unsigned int height;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSURL *url;
@property (nonatomic, readonly) unsigned int width;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)height;
- (id)identifier;
- (id)initWithICImage:(id)arg1;
- (id)initWithIdentifier:(id)arg1 url:(id)arg2;
- (id)initWithIdentifier:(id)arg1 url:(id)arg2 width:(unsigned int)arg3 height:(unsigned int)arg4;
- (id)url;
- (unsigned int)width;

@end
