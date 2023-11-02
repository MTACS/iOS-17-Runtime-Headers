
@interface UNSAttachmentRecord : NSObject {
    NSURL * _URL;
    bool  _hiddenFromDefaultExpandedView;
    NSString * _identifier;
    NSDictionary * _thumbnailClippingRect;
    NSNumber * _thumbnailFrameNumber;
    bool  _thumbnailHidden;
    NSDictionary * _thumbnailTimestamp;
    NSString * _type;
}

@property (nonatomic, copy) NSURL *URL;
@property (nonatomic) bool hiddenFromDefaultExpandedView;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSDictionary *thumbnailClippingRect;
@property (nonatomic, copy) NSNumber *thumbnailFrameNumber;
@property (nonatomic) bool thumbnailHidden;
@property (nonatomic, copy) NSDictionary *thumbnailTimestamp;
@property (nonatomic, copy) NSString *type;

- (void).cxx_destruct;
- (id)URL;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)hiddenFromDefaultExpandedView;
- (id)identifier;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setHiddenFromDefaultExpandedView:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setThumbnailClippingRect:(id)arg1;
- (void)setThumbnailFrameNumber:(id)arg1;
- (void)setThumbnailHidden:(bool)arg1;
- (void)setThumbnailTimestamp:(id)arg1;
- (void)setType:(id)arg1;
- (void)setURL:(id)arg1;
- (id)thumbnailClippingRect;
- (id)thumbnailFrameNumber;
- (bool)thumbnailHidden;
- (id)thumbnailTimestamp;
- (id)type;

@end
