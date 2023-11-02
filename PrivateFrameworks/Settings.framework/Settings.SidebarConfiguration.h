
@interface Settings.SidebarConfiguration : NSObject <NSSecureCoding> {
    void addButtonEnabled;
    void deleteButtonEnabled;
    void iconSize;
    void selection;
    void wantsAddButton;
    void wantsDeleteButton;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
