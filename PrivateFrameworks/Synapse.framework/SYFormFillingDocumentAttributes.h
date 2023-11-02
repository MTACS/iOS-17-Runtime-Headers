
@interface SYFormFillingDocumentAttributes : NSObject <NSCopying> {
    bool  _formFillingCoachingDisabled;
}

@property (nonatomic, readonly) bool formFillingCoachingDisabled;

+ (id)formFillingDocumentAttributesForFileAtURL:(id)arg1 error:(id*)arg2;
+ (bool)removeFormFillingDocumentAttributesForFileAtURL:(id)arg1 error:(id*)arg2;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)formFillingCoachingDisabled;
- (id)initWithFormFillingCoachingDisabled:(bool)arg1;
- (bool)saveToFileURL:(id)arg1 error:(id*)arg2;

@end
