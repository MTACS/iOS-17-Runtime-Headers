
@interface VSStorefront : NSObject {
    NSString * _displayName;
    NSString * _identitifer;
    bool  _isFeatured;
}

@property (nonatomic, retain) NSString *displayName;
@property (nonatomic, retain) NSString *identitifer;
@property (nonatomic) bool isFeatured;

- (void).cxx_destruct;
- (id)displayName;
- (id)identitifer;
- (bool)isFeatured;
- (void)setDisplayName:(id)arg1;
- (void)setIdentitifer:(id)arg1;
- (void)setIsFeatured:(bool)arg1;

@end
