
@interface PXStoryMiroMusicInfo : NSObject <NSSecureCoding> {
    NSString * _flexMusicID;
}

@property (nonatomic, retain) NSString *flexMusicID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)flexMusicID;
- (id)initWithCoder:(id)arg1;
- (void)setFlexMusicID:(id)arg1;

@end
