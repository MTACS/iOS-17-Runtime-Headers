
@interface DebugHierarchyFormatSpecifier : NSObject {
    NSString * _format;
    NSString * _label;
}

@property (retain) NSString *format;
@property (retain) NSString *label;

+ (id)specifierWithFormat:(id)arg1 label:(id)arg2;

- (void).cxx_destruct;
- (id)format;
- (id)initWithFormat:(id)arg1 label:(id)arg2;
- (id)label;
- (void)setFormat:(id)arg1;
- (void)setLabel:(id)arg1;

@end
