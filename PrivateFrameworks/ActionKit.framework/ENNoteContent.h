
@interface ENNoteContent : NSObject {
    NSString * _emml;
}

@property (nonatomic, copy) NSString *emml;

+ (id)noteContentWithContentArray:(id)arg1;
+ (id)noteContentWithENML:(id)arg1;
+ (id)noteContentWithSanitizedHTML:(id)arg1;
+ (id)noteContentWithString:(id)arg1;

- (void).cxx_destruct;
- (id)emml;
- (id)enml;
- (id)enmlWithNote:(id)arg1;
- (id)initWithENML:(id)arg1;
- (void)setEmml:(id)arg1;

@end
