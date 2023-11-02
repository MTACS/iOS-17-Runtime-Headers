
@interface WidgetKit.TimelineRequest : NSObject <NSSecureCoding> {
    void environment;
    void fileHandle;
    void widget;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
