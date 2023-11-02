
@interface TSWPStoragePasteRules : NSObject {
    unsigned int  _actionFlags;
    TSWPStorage * _destStorage;
    unsigned int  _flags;
    unsigned int  _lastFlag;
    bool  _mapDestTrailCS;
    struct { 
        TSWPParagraphStyle *parStyle; 
        TSPObject *section; 
        TSWPColumnStyle *columnStyle; 
        TSWPListStyle *listStyle; 
        struct { 
            union { 
                struct { 
                    unsigned int listStart; 
                } ; 
                struct { 
                    unsigned short level; 
                    unsigned short flags; 
                } ; 
                struct { 
                    unsigned short row; 
                    unsigned short column; 
                } ; 
                struct { 
                    int writingDirection; 
                } ; 
                struct { 
                    unsigned int _singleValue; 
                } ; 
                struct { 
                    unsigned short _first; 
                    unsigned short _second; 
                } ; 
            } ; 
        } parData; 
        struct { 
            union { 
                struct { 
                    unsigned int listStart; 
                } ; 
                struct { 
                    unsigned short level; 
                    unsigned short flags; 
                } ; 
                struct { 
                    unsigned short row; 
                    unsigned short column; 
                } ; 
                struct { 
                    int writingDirection; 
                } ; 
                struct { 
                    unsigned int _singleValue; 
                } ; 
                struct { 
                    unsigned short _first; 
                    unsigned short _second; 
                } ; 
            } ; 
        } parStartData; 
        struct { 
            union { 
                struct { 
                    unsigned int listStart; 
                } ; 
                struct { 
                    unsigned short level; 
                    unsigned short flags; 
                } ; 
                struct { 
                    unsigned short row; 
                    unsigned short column; 
                } ; 
                struct { 
                    int writingDirection; 
                } ; 
                struct { 
                    unsigned int _singleValue; 
                } ; 
                struct { 
                    unsigned short _first; 
                    unsigned short _second; 
                } ; 
            } ; 
        } parBidiData; 
    }  _paragraphs;
    unsigned long long  _sourceColumnStyleCount;
    unsigned long long  _sourceSectionCount;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _srcLeadRange;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _srcTrailRange;
}

- (void)addActionFlag:(int)arg1;
- (void)applyParagraph:(int)arg1 toCharIndex:(unsigned long long)arg2 ioTransaction:(void*)arg3;
- (void)dealloc;
- (void)didPasteWithIOTransaction:(void*)arg1 atDestRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)mapCharacterStyleProperties:(id)arg1 toRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 ioTransaction:(void*)arg3;
- (void)mapCharacterStyles:(int)arg1 toRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 ioTransaction:(void*)arg3;
- (void)setupFlagsForPastingSrcStorage:(id)arg1 intoDestStorage:(id)arg2 atDestRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)willPasteStorage:(id)arg1 intoDestStorage:(id)arg2 atDestRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;

@end
