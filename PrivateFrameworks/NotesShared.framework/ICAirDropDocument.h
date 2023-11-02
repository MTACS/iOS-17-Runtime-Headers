
@interface ICAirDropDocument : NSObject <ICAirDropDocument> {
    struct Document { 
        int (**_vptr$MessageLite)(); 
        struct basic_string<char, std::char_traits<char>, std::allocator<char>> { 
            struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { 
                struct __rep { 
                    union { 
                        struct __long { 
                            char *__data_; 
                            unsigned long long __size_; 
                            unsigned int __cap_ : 63; 
                            unsigned int __is_long_ : 1; 
                        } __l; 
                        struct __short { 
                            BOOL __data_[23]; 
                            unsigned char __padding_[0]; 
                            unsigned int __size_ : 7; 
                            unsigned int __is_long_ : 1; 
                        } __s; 
                        struct __raw { 
                            unsigned long long __words[3]; 
                        } __r; 
                    } ; 
                } __value_; 
            } __r_; 
        } _unknown_fields_; 
        unsigned int _has_bits_[1]; 
        int _cached_size_; 
        struct NoteDocument {} *notedocument_; 
        struct LegacyNoteDocument {} *legacynotedocument_; 
    }  _document;
}

@property (nonatomic, readonly) id activityItem;
@property (nonatomic, readonly) bool hasDocumentForLegacyNote;
@property (nonatomic, readonly) bool hasDocumentForNote;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

+ (bool)canAirDropImportIntoAccount:(id)arg1 context:(id)arg2;
+ (id)documentAtURL:(id)arg1;
+ (id)legacyNoteAirDropDocumentWithData:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)activityItem;
- (id)dataFromLegacyNoteDocument;
- (void*)document;
- (bool)hasDocumentForLegacyNote;
- (bool)hasDocumentForNote;
- (id)initWithData:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

+ (id)legacyNoteAirDropDocumentWithWebArchive:(id)arg1;

- (id)webArchiveFromLegacyNoteDocument;

@end
