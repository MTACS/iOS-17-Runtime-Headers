
@interface TSWPTypesetterAttachmentMap : NSObject {
    TSWPAttachment * _attachment;
    TSDLayout * _layout;
    struct __CTLine { } * _lineRef;
}

@property (nonatomic) TSWPAttachment *attachment;
@property (nonatomic, retain) TSDLayout *layout;
@property (nonatomic, readonly) struct __CTLine { }*lineRef;

+ (id)mapWithAttachment:(id)arg1 layout:(id)arg2 pageNumber:(unsigned long long)arg3 pageCount:(unsigned long long)arg4 footnoteMarkProvider:(id)arg5 styleProvider:(id)arg6 colorOverride:(id)arg7;

- (id)attachment;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)layout;
- (struct __CTLine { }*)lineRef;
- (void)setAttachment:(id)arg1;
- (void)setLayout:(id)arg1;

@end
