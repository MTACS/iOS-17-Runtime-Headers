
@interface AVAudioChannelLayout : NSObject <NSSecureCoding> {
    struct AudioChannelLayout { unsigned int x1; unsigned int x2; unsigned int x3; struct AudioChannelDescription { unsigned int x_4_1_1; unsigned int x_4_1_2; float x_4_1_3[3]; } x4[1]; } * _layout;
    unsigned int  _layoutTag;
    void * _reserved;
}

@property (nonatomic, readonly) unsigned int channelCount;
@property (nonatomic, readonly) const struct AudioChannelLayout { unsigned int x1; unsigned int x2; unsigned int x3; struct AudioChannelDescription { unsigned int x_4_1_1; unsigned int x_4_1_2; float x_4_1_3[3]; } x4[1]; }*layout;
@property (nonatomic, readonly) unsigned int layoutTag;

+ (id)layoutWithLayout:(const struct AudioChannelLayout { unsigned int x1; unsigned int x2; unsigned int x3; struct AudioChannelDescription { unsigned int x_4_1_1; unsigned int x_4_1_2; float x_4_1_3[3]; } x4[1]; }*)arg1;
+ (id)layoutWithLayoutTag:(unsigned int)arg1;
+ (bool)supportsSecureCoding;

- (unsigned int)channelCount;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithLayout:(const struct AudioChannelLayout { unsigned int x1; unsigned int x2; unsigned int x3; struct AudioChannelDescription { unsigned int x_4_1_1; unsigned int x_4_1_2; float x_4_1_3[3]; } x4[1]; }*)arg1;
- (id)initWithLayoutTag:(unsigned int)arg1;
- (bool)isEqual:(id)arg1;
- (const struct AudioChannelLayout { unsigned int x1; unsigned int x2; unsigned int x3; struct AudioChannelDescription { unsigned int x_4_1_1; unsigned int x_4_1_2; float x_4_1_3[3]; } x4[1]; }*)layout;
- (unsigned long long)layoutSize;
- (unsigned int)layoutTag;

@end
