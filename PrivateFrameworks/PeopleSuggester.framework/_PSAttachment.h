
@interface _PSAttachment : NSObject <NSSecureCoding> {
    NSString * _UTI;
    NSUUID * _cloudIdentifier;
    NSString * _contentText;
    NSURL * _contentURL;
    NSData * _contentURLSandboxExtension;
    NSDate * _creationDate;
    NSUUID * _identifier;
    NSData * _imageData;
    NSArray * _peopleInPhoto;
    NSString * _photoLocalIdentifier;
    NSArray * _photoLocalIdentifiers;
    NSArray * _photoSceneDescriptors;
}

@property (nonatomic, readonly, copy) NSString *UTI;
@property (nonatomic, readonly, copy) NSUUID *cloudIdentifier;
@property (nonatomic, copy) NSString *contentText;
@property (nonatomic, readonly, copy) NSURL *contentURL;
@property (nonatomic, retain) NSData *contentURLSandboxExtension;
@property (nonatomic, readonly, copy) NSDate *creationDate;
@property (nonatomic, readonly, copy) NSUUID *identifier;
@property (nonatomic, readonly) NSData *imageData;
@property (nonatomic, copy) NSArray *peopleInPhoto;
@property (nonatomic, readonly, copy) NSString *photoLocalIdentifier;
@property (nonatomic, readonly, copy) NSArray *photoLocalIdentifiers;
@property (nonatomic, copy) NSArray *photoSceneDescriptors;
@property (nonatomic, readonly, copy) NSArray *suggestedContactIdentifiers;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UTI;
- (id)cloudIdentifier;
- (id)contentText;
- (id)contentURL;
- (id)contentURLSandboxExtension;
- (id)creationDate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)imageData;
- (id)initWithCoder:(id)arg1;
- (id)initWithCreationDate:(id)arg1 UTI:(id)arg2 photoLocalIdentifier:(id)arg3 identifier:(id)arg4 cloudIdentifier:(id)arg5 contentURL:(id)arg6 contentText:(id)arg7;
- (id)initWithCreationDate:(id)arg1 UTI:(id)arg2 photoLocalIdentifier:(id)arg3 identifier:(id)arg4 cloudIdentifier:(id)arg5 contentURL:(id)arg6 contentText:(id)arg7 imageData:(id)arg8;
- (id)initWithCreationDate:(id)arg1 UTI:(id)arg2 photoLocalIdentifier:(id)arg3 identifier:(id)arg4 cloudIdentifier:(id)arg5 contentURL:(id)arg6 contentText:(id)arg7 imageData:(id)arg8 photoLocalIdentifiers:(id)arg9 suggestedContactIdentifiers:(id)arg10;
- (id)initWithCreationDate:(id)arg1 UTI:(id)arg2 photoLocalIdentifier:(id)arg3 identifier:(id)arg4 cloudIdentifier:(id)arg5 contentURL:(id)arg6 contentText:(id)arg7 imageData:(id)arg8 photoLocalIdentifiers:(id)arg9 suggestedContactIdentifiers:(id)arg10 photoSceneDescriptors:(id)arg11 peopleInPhoto:(id)arg12;
- (bool)isEqual:(id)arg1;
- (id)peopleInPhoto;
- (id)photoLocalIdentifier;
- (id)photoLocalIdentifiers;
- (id)photoSceneDescriptors;
- (void)setContentText:(id)arg1;
- (void)setContentURLSandboxExtension:(id)arg1;
- (void)setPeopleInPhoto:(id)arg1;
- (void)setPhotoSceneDescriptors:(id)arg1;
- (void)setSuggestedContactIdentifiers:(id)arg1;
- (id)suggestedContactIdentifiers;
- (unsigned long long)totalHashOfElementsFromArray:(id)arg1;

@end
