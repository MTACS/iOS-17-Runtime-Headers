
@interface UIAccessibilityHierarchyDescription : NSObject <NSSecureCoding> {
    NSArray * _leafElements;
    UIAccessibilityElementDescription * _rootElement;
}

@property (nonatomic, retain) NSArray *leafElements;
@property (nonatomic, retain) UIAccessibilityElementDescription *rootElement;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)leafElements;
- (id)rootElement;
- (void)setLeafElements:(id)arg1;
- (void)setRootElement:(id)arg1;

@end
