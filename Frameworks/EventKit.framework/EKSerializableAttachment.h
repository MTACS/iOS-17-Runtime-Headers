
@interface EKSerializableAttachment : EKSerializableObject {
    NSString * _contentTypeFromServer;
    NSURL * _urlOnDisk;
}

@property (nonatomic, retain) NSString *contentTypeFromServer;
@property (nonatomic, retain) NSURL *urlOnDisk;

+ (id)classesForKey;

- (void).cxx_destruct;
- (id)contentTypeFromServer;
- (id)createAttachment;
- (id)initWithAttachment:(id)arg1;
- (void)setContentTypeFromServer:(id)arg1;
- (void)setUrlOnDisk:(id)arg1;
- (id)urlOnDisk;

@end
