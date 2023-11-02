
@interface RemindersUICore.TTRReminderCopyPasteItem : NSObject <NSItemProviderReading, NSItemProviderWriting, NSSecureCoding> {
    void metadata;
    void storages;
    void titles;
}

+ (id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3;
+ (id)readableTypeIdentifiersForItemProvider;
+ (bool)supportsSecureCoding;
+ (id)writableTypeIdentifiersForItemProvider;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(id /* block */)arg2;

@end
