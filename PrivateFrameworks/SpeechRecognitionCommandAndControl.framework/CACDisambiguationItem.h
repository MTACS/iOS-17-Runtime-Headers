
@interface CACDisambiguationItem : NSObject {
    long long  _type;
}

@property (readonly) NSString *displayDescription;
@property (readonly) UIImage *displayImage;
@property (readonly) NSString *displayName;
@property (nonatomic) long long type;

- (id)displayDescription;
- (id)displayImage;
- (id)displayName;
- (void)setType:(long long)arg1;
- (void)startInteraction;
- (long long)type;

@end
